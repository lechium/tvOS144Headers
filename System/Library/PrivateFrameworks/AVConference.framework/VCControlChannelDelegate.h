/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCControlChannelDelegate <NSObject>
@required
-(void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned)arg3 fromParticipant:(id)arg4;
-(void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(BOOL)arg3 toParticipant:(id)arg4;
-(void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;

@end

