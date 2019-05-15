/*
 * ss7 module - ISUP parsed
 *
 * Copyright (C) 2016 Holger Hans Peter Freyther (help@moiji-mobile.com)
 * *
 */
#pragma once

#include <stdint.h>
#include <sys/types.h>

#include "srjson.h"

/**
 * State structure
 */
struct isup_state {
	srjson_doc_t*	json;
};

enum {
	ISUP_JSON_STRING,
	ISUP_FIELD_METHOD,
	ISUP_FIELD_OPC,
	ISUP_FIELD_DPC,
	ISUP_FIELD_CIC,
	ISUP_FIELD_CALLED_INN,
	ISUP_FIELD_CALLED_TON,
	ISUP_FIELD_CALLED_NPI,
	ISUP_FIELD_CALLED_NUM,
	ISUP_FIELD_CALLING_NI,
	ISUP_FIELD_CALLING_RESTRICT,
	ISUP_FIELD_CALLING_SCREENED,
	ISUP_FIELD_CALLING_TON,
	ISUP_FIELD_CALLING_NPI,
	ISUP_FIELD_CALLING_NUM,
	ISUP_FIELD_CALLING_CAT,
	ISUP_FIELD_CAUSE_STD,
	ISUP_FIELD_CAUSE_LOC,
	ISUP_FIELD_CAUSE_ITU_CLASS,
	ISUP_FIELD_CAUSE_ITU_NUM,
	ISUP_FIELD_EVENT_NUM,
	ISUP_FIELD_HOP_COUNTER,
	ISUP_FIELD_NOC_SAT,
	ISUP_FIELD_NOC_CHECK,
	ISUP_FIELD_NOC_ECHO,
	ISUP_FIELD_FWD_INTE,
	ISUP_FIELD_FWD_INTW,
	ISUP_FIELD_FWD_EE_METH,
	ISUP_FIELD_FWD_EE_INF,
	ISUP_FIELD_FWD_ISUP_NUM,
	ISUP_FIELD_FWD_ISUP_PREF,
	ISUP_FIELD_FWD_SCCP_METHOD,
	ISUP_FIELD_FWD_ISDN,
	ISUP_FIELD_MEDIUM,
	ISUP_FILED_UI_CODING,
	ISUP_FIELD_UI_TRANS_CAP,
	ISUP_FIELD_UI_TRANS_MODE,
	ISUP_FIELD_UI_TRANS_RATE,
	ISUP_FIELD_UI_LAYER1_IDENT,
	ISUP_FIELD_UI_LAYER1_PROTOCOL,
};

int isup_parse(const uint8_t *data, size_t len, struct isup_state *ptrs, uint16_t *cic);