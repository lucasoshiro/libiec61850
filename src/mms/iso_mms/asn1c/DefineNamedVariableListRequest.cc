/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "DefineNamedVariableListRequest.h"

static asn_TYPE_member_t asn_MBR_Member_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DefineNamedVariableListRequest__listOfVariable__Member, variableSpecification),
		static_cast<ber_tlv_tag_t>(-1) /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_VariableSpecification,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"variableSpecification"
		},
	{ ATF_POINTER, 1, offsetof(struct DefineNamedVariableListRequest__listOfVariable__Member, alternateAccess),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlternateAccess,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alternateAccess"
		},
};
static ber_tlv_tag_t asn_DEF_Member_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name at 772 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* address at 773 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* variableDescription at 776 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* scatteredAccessDescription at 779 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 0, 0, 0 }, /* invalidated at 780 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 } /* alternateAccess at 635 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_4 = {
	sizeof(struct DefineNamedVariableListRequest__listOfVariable__Member),
	offsetof(struct DefineNamedVariableListRequest__listOfVariable__Member, _asn_ctx),
	asn_MAP_Member_tag2el_4,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_4 = {
	"SEQUENCE",
	"SEQUENCE",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Member_tags_4,
	sizeof(asn_DEF_Member_tags_4)
		/sizeof(asn_DEF_Member_tags_4[0]), /* 1 */
	asn_DEF_Member_tags_4,	/* Same as above */
	sizeof(asn_DEF_Member_tags_4)
		/sizeof(asn_DEF_Member_tags_4[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_4,
	2,	/* Elements count */
	&asn_SPC_Member_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_listOfVariable_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listOfVariable_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfVariable_specs_3 = {
	sizeof(struct DefineNamedVariableListRequest::DefineNamedVariableListRequest__listOfVariable),
	offsetof(struct DefineNamedVariableListRequest::DefineNamedVariableListRequest__listOfVariable, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfVariable_3 = {
	"listOfVariable",
	"listOfVariable",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfVariable_tags_3,
	sizeof(asn_DEF_listOfVariable_tags_3)
		/sizeof(asn_DEF_listOfVariable_tags_3[0]) - 1, /* 1 */
	asn_DEF_listOfVariable_tags_3,	/* Same as above */
	sizeof(asn_DEF_listOfVariable_tags_3)
		/sizeof(asn_DEF_listOfVariable_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfVariable_3,
	1,	/* Single element */
	&asn_SPC_listOfVariable_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DefineNamedVariableListRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DefineNamedVariableListRequest, variableListName),
		static_cast<ber_tlv_tag_t>(-1) /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"variableListName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DefineNamedVariableListRequest, listOfVariable),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_listOfVariable_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfVariable"
		},
};
static ber_tlv_tag_t asn_DEF_DefineNamedVariableListRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DefineNamedVariableListRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 1 }, /* vmdspecific at 169 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, -1, 0 }, /* listOfVariable at 636 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* domainspecific at 172 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 } /* aaspecific at 176 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DefineNamedVariableListRequest_specs_1 = {
	sizeof(struct DefineNamedVariableListRequest),
	offsetof(struct DefineNamedVariableListRequest, _asn_ctx),
	asn_MAP_DefineNamedVariableListRequest_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DefineNamedVariableListRequest = {
	"DefineNamedVariableListRequest",
	"DefineNamedVariableListRequest",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DefineNamedVariableListRequest_tags_1,
	sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1)
		/sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1[0]), /* 1 */
	asn_DEF_DefineNamedVariableListRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1)
		/sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DefineNamedVariableListRequest_1,
	2,	/* Elements count */
	&asn_SPC_DefineNamedVariableListRequest_specs_1	/* Additional specs */
};

