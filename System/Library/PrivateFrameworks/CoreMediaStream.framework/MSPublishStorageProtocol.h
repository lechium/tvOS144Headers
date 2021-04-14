/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate; 
@required
-(id<MSPublishStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)abort;
-(void)computeHashForAsset:(id)arg1;
-(void)publishAssets:(id)arg1 URL:(id)arg2;

@end

