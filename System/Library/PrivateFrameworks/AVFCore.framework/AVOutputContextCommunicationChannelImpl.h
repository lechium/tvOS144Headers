/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVOutputContextCommunicationChannel;


@protocol AVOutputContextCommunicationChannelImpl <NSObject>
@property (__weak) AVOutputContextCommunicationChannel * parentCommunicationChannel; 
@required
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setParentCommunicationChannel:(id)arg1;
-(AVOutputContextCommunicationChannel *)parentCommunicationChannel;

@end
