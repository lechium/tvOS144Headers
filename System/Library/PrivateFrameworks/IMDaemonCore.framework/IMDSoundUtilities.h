/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDSoundUtilities : NSObject
+(long long)_soundTypeForMessage:(id)arg1 ;
+(void)_playSoundType:(long long)arg1 ;
+(long long)_smsSoundsToPlay;
+(BOOL)_isSMSMessage:(id)arg1 ;
+(BOOL)_wasDowngraded:(id)arg1 ;
+(BOOL)_isSuppressedForGUID:(id)arg1 ;
+(void)_stopSuppressingForGUID:(id)arg1 ;
+(BOOL)_isAssociatedMessage:(id)arg1 ;
+(BOOL)_isAcknowledgmentMessage:(id)arg1 ;
+(BOOL)_isAutoPlay:(id)arg1 ;
+(void)_playSMSSound;
+(void)_playAcknowledgmentSentSound;
+(void)playMessageSentSoundIfNeeded:(id)arg1 ;
+(unsigned)_installSystemSound:(id)arg1 ;
@end

