/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject
+(id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseRemovePairingResponse:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseAddPairingResponse:(id)arg1 error:(id*)arg2 ;
+(id)createListPairingsRequest:(id*)arg1 ;
+(id)parseListPairingsResponse:(id)arg1 error:(id*)arg2 ;
@end

