/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue, ATLegacyAssetLinkProgressDelegate;
@class NSMutableSet, NSMutableDictionary, ATLegacyMessageLink, NSMutableArray, NSObject, NSString, NSArray;

@interface ATLegacyAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {

	NSMutableSet* _unqueuedAssets;
	NSMutableDictionary* _enqueuedAssetsByDataClass;
	ATLegacyMessageLink* _messageLink;
	NSMutableDictionary* _syncIDToItemPidMap;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSMutableArray* _readyDataClasses;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _hostVersion;
	NSArray* _supportedDataClasses;
	id<ATLegacyAssetLinkProgressDelegate> _progressDelegate;

}

@property (nonatomic,copy) NSArray * supportedDataClasses;                                               //@synthesize supportedDataClasses=_supportedDataClasses - In the implementation block
@property (nonatomic,copy) NSArray * readyDataClasses; 
@property (assign,nonatomic,__weak) id<ATLegacyAssetLinkProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                                                  //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(unsigned long long)maximumBatchSize;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id<ATLegacyAssetLinkProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<ATLegacyAssetLinkProgressDelegate>)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(BOOL)linkIsReady;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)_handleFileCompleteMessage:(id)arg1 ;
-(void)_handleFileErrorMessage:(id)arg1 ;
-(void)_handleFileProgressMessage:(id)arg1 ;
-(void)_enqueueAndRequestAssets;
-(NSArray *)supportedDataClasses;
-(id)_assetsForDataClass:(id)arg1 identifier:(id)arg2 ;
-(id)_manifestEntryForATAsset:(id)arg1 ;
-(id)_assetManifestForDataclasses:(id)arg1 ;
-(id)initWithMessageLink:(id)arg1 hostVersion:(id)arg2 ;
-(void)setReadyDataClasses:(NSArray *)arg1 ;
-(NSArray *)readyDataClasses;
-(void)setSupportedDataClasses:(NSArray *)arg1 ;
@end
