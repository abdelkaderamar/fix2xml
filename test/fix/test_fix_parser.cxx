// MIT License
//
// Copyright 2018 Abdelkader Amar
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include <gtest/gtest.h>

#include "fix/fix_parser.hxx"

#include <iostream>

using namespace std;
using namespace fix2xml;

TEST(fix_parser, parse)
{

  {
    fix_parser parser;
    parser.parse("res/fix-BC.xml");
    auto dico = parser.dico();

    EXPECT_EQ (1, dico->messages().size());
    EXPECT_EQ (2, dico->components().size());
    EXPECT_EQ (1452, dico->fields().size());

    fix_message_type msg_type;
    EXPECT_TRUE(dico->get_fix_message_by_name("NetworkCounterpartySystemStatusRequest", msg_type));
    EXPECT_EQ("BC", msg_type._msgtype);

    {
      fix_message_type msg_type2;
      EXPECT_TRUE(dico->get_fix_message_by_type("BC", msg_type2));
      EXPECT_EQ("NetworkCounterpartySystemStatusRequest", msg_type2._name);
    }

    /*
     <component name='CompIDReqGrp'>
       <group name='NoCompIDs' required='N'>
         <field name='RefCompID' required='N' />
         <field name='RefSubID' required='N' />
         <field name='LocationID' required='N' />
         <field name='DeskID' required='N' />
       </group>
     </component>
    */
    fix_component_type compo_idreq;
    EXPECT_TRUE(dico->get_fix_component("CompIDReqGrp", compo_idreq));
    EXPECT_EQ(1, compo_idreq._components.size());

    fix_component_type compo_nocompids;
    EXPECT_TRUE(dico->get_fix_component("NoCompIDs", compo_nocompids));
    EXPECT_EQ(0, compo_nocompids._components.size());
    EXPECT_EQ(4, compo_nocompids._fields.size());
    EXPECT_EQ(1, compo_nocompids._fields.count("RefCompID"));
    EXPECT_EQ(1, compo_nocompids._fields.count("RefSubID"));
    EXPECT_EQ(1, compo_nocompids._fields.count("LocationID"));
    EXPECT_EQ(1, compo_nocompids._fields.count("DeskID"));

    // <field number='1' name='Account' type='STRING' />
    fix_field_type account_type;
    EXPECT_TRUE(dico->get_fix_field("Account", account_type));
    EXPECT_EQ("1", account_type._tag);
    EXPECT_EQ("STRING", account_type._type);

    // <field number='34' name='MsgSeqNum' type='SEQNUM' />
    fix_field_type seqnum_type;
    EXPECT_TRUE(dico->get_fix_field("MsgSeqNum", seqnum_type));
    EXPECT_EQ("34", seqnum_type._tag);
    EXPECT_EQ("SEQNUM", seqnum_type._type);

    // <field number='750' name='TradeRequestStatus' type='INT'>
    fix_field_type tradereqstatus_type;
    EXPECT_TRUE(dico->get_fix_field("TradeRequestStatus", tradereqstatus_type));
    EXPECT_EQ("750", tradereqstatus_type._tag);
    EXPECT_EQ("INT", tradereqstatus_type._type);

    // <field number='999' name='LegUnitOfMeasure' type='STRING' />
    fix_field_type legunitofmeasure_type;
    EXPECT_TRUE(dico->get_fix_field("LegUnitOfMeasure", legunitofmeasure_type));
    EXPECT_EQ("999", legunitofmeasure_type._tag);
    EXPECT_EQ("STRING", legunitofmeasure_type._type);

    //   <field number='1504' name='RelSymTransactTime' type='UTCTIMESTAMP' />
    fix_field_type relsymtransacttime_type;
    EXPECT_TRUE(dico->get_fix_field("RelSymTransactTime", relsymtransacttime_type));
    EXPECT_EQ("1504", relsymtransacttime_type._tag);
    EXPECT_EQ("UTCTIMESTAMP", relsymtransacttime_type._type);

  }
}
