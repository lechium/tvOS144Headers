/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProgress.h>

@protocol BRProgressProxyDelegate;
@class NSURL;

@interface BRProgressProxy : NSProgress {

	NSURL* _url;
	id _globalProgressSubscriber;
	id<BRProgressProxyDelegate> _delegate;

}

@property (__weak) id<BRProgressProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id<BRProgressProxyDelegate>)delegate;
-(void)setDelegate:(id<BRProgressProxyDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

