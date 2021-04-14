/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CDPDAccount : NSObject

@property (assign,nonatomic) BOOL hasDisabledKeychainExplicitly; 
+(id)sharedInstance;
-(BOOL)isICDPEnabledForDSID:(id)arg1 ;
-(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
-(BOOL)hasDisabledKeychainExplicitly;
-(void)setHasDisabledKeychainExplicitly:(BOOL)arg1 ;
@end
