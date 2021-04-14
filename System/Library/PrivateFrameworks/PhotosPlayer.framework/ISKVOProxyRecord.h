/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class ISKVOProxy, NSObject;

@interface ISKVOProxyRecord : NSObject {

	ISKVOProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) ISKVOProxy * proxy;                              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(ISKVOProxy *)proxy;
-(id)initWithProxy:(id)arg1 queue:(id)arg2 ;
@end

