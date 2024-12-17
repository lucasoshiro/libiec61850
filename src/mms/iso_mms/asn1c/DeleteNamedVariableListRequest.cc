/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "DeleteNamedVariableListRequest.h"

static int asn_DFL_2_set_0(int set_value, void **sptr) {
	INTEGER_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		return asn_long2INTEGER(st, 0);
	} else {
		/* Test default value 0 */
		long value;
		if(asn_INTEGER2long(st, &value))
			return -1;
		return (value == 0);
	}
}
static asn_TYPE_member_t asn_MBR_listOfVariableListName_7[] = {
	{ ATF_POINTER, 0, 0,
		static_cast<ber_tlv_tag_t>(-1) /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listOfVariableListName_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfVariableListName_specs_7 = {
	sizeof(struct DeleteNamedVariableListRequest__listOfVariableListName),
	offsetof(struct DeleteNamedVariableListRequest__listOfVariableListName, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfVariableListName_7 = {
	"listOfVariableListName",
	"listOfVariableListName",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfVariableListName_tags_7,
	sizeof(asn_DEF_listOfVariableListName_tags_7)
		/sizeof(asn_DEF_listOfVariableListName_tags_7[0]) - 1, /* 1 */
	asn_DEF_listOfVariableListName_tags_7,	/* Same as above */
	sizeof(asn_DEF_listOfVariableListName_tags_7)
		/sizeof(asn_DEF_listOfVariableListName_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfVariableListName_7,
	1,	/* Single element */
	&asn_SPC_listOfVariableListName_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DeleteNamedVariableListRequest_1[] = {
	{ ATF_POINTER, 3, offsetof(struct DeleteNamedVariableListRequest, scopeOfDelete),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_2_set_0,	/* DEFAULT 0 */
		"scopeOfDelete"
		},
	{ ATF_POINTER, 2, offsetof(struct DeleteNamedVariableListRequest, listOfVariableListName),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_listOfVariableListName_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfVariableListName"
		},
	{ ATF_POINTER, 1, offsetof(struct DeleteNamedVariableListRequest, domainName),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"domainName"
		},
};
static ber_tlv_tag_t asn_DEF_DeleteNamedVariableListRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DeleteNamedVariableListRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scopeOfDelete at 663 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* listOfVariableListName at 668 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* domainName at 669 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DeleteNamedVariableListRequest_specs_1 = {
	sizeof(struct DeleteNamedVariableListRequest),
	offsetof(struct DeleteNamedVariableListRequest, _asn_ctx),
	asn_MAP_DeleteNamedVariableListRequest_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DeleteNamedVariableListRequest = {
	"DeleteNamedVariableListRequest",
	"DeleteNamedVariableListRequest",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DeleteNamedVariableListRequest_tags_1,
	sizeof(asn_DEF_DeleteNamedVariableListRequest_tags_1)
		/sizeof(asn_DEF_DeleteNamedVariableListRequest_tags_1[0]), /* 1 */
	asn_DEF_DeleteNamedVariableListRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_DeleteNamedVariableListRequest_tags_1)
		/sizeof(asn_DEF_DeleteNamedVariableListRequest_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DeleteNamedVariableListRequest_1,
	3,	/* Elements count */
	&asn_SPC_DeleteNamedVariableListRequest_specs_1	/* Additional specs */
};

