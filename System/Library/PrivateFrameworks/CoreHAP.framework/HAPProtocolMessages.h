/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HAPProtocolMessages : HMFObject
+(id)logCategory;
+(id)constructTokenRequest:(id)arg1 outTID:(char*)arg2 ;
+(BOOL)parseTokenResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3 outToken:(id*)arg4 outUUID:(id*)arg5 ;
+(id)constructTokenUpdateRequest:(id)arg1 token:(id)arg2 outTID:(char*)arg3 ;
+(BOOL)parseTokenUpdateResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3 ;
+(id)parseInfoResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3 ;
+(id)constructInfoRequest:(id)arg1 outTID:(char*)arg2 ;
+(id)constructRequestHeaderFor:(unsigned long long)arg1 instanceID:(id)arg2 outTID:(char*)arg3 ;
+(id)constructInfoRequest:(id)arg1 serviceUUID:(id)arg2 outTID:(char*)arg3 ;
@end

