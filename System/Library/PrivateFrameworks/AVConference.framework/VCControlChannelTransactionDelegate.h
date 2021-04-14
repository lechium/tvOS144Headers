/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCControlChannelTransactionDelegate <NSObject>
@property (readonly) BOOL isEncryptionEnabled; 
@required
-(BOOL)isParticipantActive:(unsigned long long)arg1;
-(void)addToSentStats:(int)arg1;
-(BOOL)isEncryptionEnabled;
-(id)lastUsedMKIBytes;
-(void)scheduleAfter:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)addToReceivedStats:(int)arg1;

@end

