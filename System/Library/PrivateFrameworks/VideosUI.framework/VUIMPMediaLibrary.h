/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIMediaLibrary.h>

@protocol OS_dispatch_queue;
@class MPMediaLibrary, NSObject, NSOperationQueue;

@interface VUIMPMediaLibrary : VUIMediaLibrary {

	unsigned long long _connectionState;
	MPMediaLibrary* _mediaLibrary;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialOperationQueue;

}

@property (assign,nonatomic) unsigned long long connectionState;                                      //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                           //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                                 //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)arg1 ;
-(void)dealloc;
-(id)title;
-(unsigned long long)connectionState;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(BOOL)hasImageCache;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(id)initWithMPMediaLibrary:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleMediaLibraryStatusDidChangeNotification:(id)arg1 ;
-(void)_enqueueProcessingBlock:(/*^block*/id)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end
