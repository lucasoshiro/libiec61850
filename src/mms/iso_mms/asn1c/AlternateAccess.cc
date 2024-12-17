/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "AlternateAccess.h"

static asn_TYPE_member_t asn_MBR_named_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AlternateAccess__Member::AlternateAccess__Member_u::named, componentName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"componentName"
		},
	{ ATF_POINTER, 0, offsetof(struct AlternateAccess__Member::AlternateAccess__Member_u::named, access),
		static_cast<ber_tlv_tag_t>(-1) /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_AlternateAccessSelection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"access"
		},
};
static ber_tlv_tag_t asn_DEF_named_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_named_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 1 }, /* componentName at 540 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, -1, 0 }, /* selectAlternateAccess at 555 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* component at 561 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* index at 562 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* indexRange at 564 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 } /* allElements at 567 */
};
static asn_SEQUENCE_specifics_t asn_SPC_named_specs_4 = {
	sizeof(struct AlternateAccess__Member::AlternateAccess__Member_u::named),
	offsetof(struct AlternateAccess__Member::AlternateAccess__Member_u::named, _asn_ctx),
	asn_MAP_named_tag2el_4,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_named_4 = {
	"named",
	"named",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_named_tags_4,
	sizeof(asn_DEF_named_tags_4)
		/sizeof(asn_DEF_named_tags_4[0]) - 1, /* 1 */
	asn_DEF_named_tags_4,	/* Same as above */
	sizeof(asn_DEF_named_tags_4)
		/sizeof(asn_DEF_named_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_named_4,
	2,	/* Elements count */
	&asn_SPC_named_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_POINTER, 0, offsetof(struct AlternateAccess__Member, choice.unnamed),
		static_cast<ber_tlv_tag_t>(-1) /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_AlternateAccessSelection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unnamed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AlternateAccess__Member, choice.named),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_named_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"named"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectAlternateAccess at 555 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* component at 561 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* index at 562 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* indexRange at 564 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 0, 0, 0 }, /* allElements at 567 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 } /* named at 540 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct AlternateAccess__Member),
	offsetof(struct AlternateAccess__Member, _asn_ctx),
	offsetof(struct AlternateAccess__Member, present),
	sizeof(((struct AlternateAccess__Member *)0)->present),
	asn_MAP_Member_tag2el_2,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"CHOICE",
	"CHOICE",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	2,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_AlternateAccess_1[] = {
	{ ATF_POINTER, 0, 0,
		static_cast<ber_tlv_tag_t>(-1) /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_AlternateAccess_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_AlternateAccess_specs_1 = {
	sizeof(struct AlternateAccess),
	offsetof(struct AlternateAccess, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_AlternateAccess = {
	"AlternateAccess",
	"AlternateAccess",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AlternateAccess_tags_1,
	sizeof(asn_DEF_AlternateAccess_tags_1)
		/sizeof(asn_DEF_AlternateAccess_tags_1[0]), /* 1 */
	asn_DEF_AlternateAccess_tags_1,	/* Same as above */
	sizeof(asn_DEF_AlternateAccess_tags_1)
		/sizeof(asn_DEF_AlternateAccess_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AlternateAccess_1,
	1,	/* Single element */
	&asn_SPC_AlternateAccess_specs_1	/* Additional specs */
};

