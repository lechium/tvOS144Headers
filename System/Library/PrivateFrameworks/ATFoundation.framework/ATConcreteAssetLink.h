/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATFoundation/ATAssetLink.h>
#import <ATFoundation/ATMessageLinkObserver.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;
@class ATMessageLink, NSMutableArray, NSMutableSet, NSMutableDictionary, NSObject, NSString;

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {

	ATMessageLink* _messageLink;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSMutableArray* _outstandingAssets;
	NSMutableSet* _readers;
	NSMutableSet* _readersPendingStop;
	NSMutableDictionary* _readersToAssetsMap;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _readerQueue;
	NSObject*<OS_dispatch_queue> _fileIOQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _readersPendingStopGroup;
	int _pendingWriteAmount;
	NSObject*<OS_dispatch_semaphore> _pendingWriteSemaphore;

}

@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(id)initWithMessageLink:(id)arg1 ;
-(unsigned long long)maximumBatchSize;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(BOOL)linkIsReady;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)_requestAsset:(id)arg1 ;
-(id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2 ;
-(id)_keyForATAssetInReaderMap:(id)arg1 ;
@end

