/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSObject, NSString, NSMutableDictionary;

@interface OFImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialDiskSaveQueue;
	NSString* _diskCacheDirectory;
	NSMutableDictionary* _diskCacheDirectoryForURLs;
	BOOL _useAsynchronousSerialDiskSaveQueue;
	unsigned long long _imageFormat;

}

@property (assign,nonatomic) BOOL useAsynchronousSerialDiskSaveQueue;              //@synthesize useAsynchronousSerialDiskSaveQueue=_useAsynchronousSerialDiskSaveQueue - In the implementation block
@property (assign,nonatomic) unsigned long long imageFormat;                       //@synthesize imageFormat=_imageFormat - In the implementation block
+(unsigned long long)alignResolution:(unsigned long long)arg1 ;
+(unsigned long long)bestResolutionForSize:(CGSize)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)imageFormat;
-(void)setImageFormat:(unsigned long long)arg1 ;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(void)invalidateMemoryCaches;
-(id)_diskCacheDirectoryForURL:(id)arg1 ;
-(id)_diskCacheFilePathForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(id)_diskCacheResolutionsForURL:(id)arg1 ;
-(id)initWithDiskCacheDirectory:(id)arg1 ;
-(void)invalidateDiskCaches;
-(void)invalidateDiskCacheForURL:(id)arg1 ;
-(void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setImage:(CGImageRef)arg1 withResolution:(unsigned long long)arg2 forURL:(id)arg3 ;
-(CGImageRef)imageForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(BOOL)hasImageForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(CGImageRef)imageFromBestDiskCacheForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(CGImageRef)bestImageDiskCacheForURL:(id)arg1 ;
-(BOOL)useAsynchronousSerialDiskSaveQueue;
-(void)setUseAsynchronousSerialDiskSaveQueue:(BOOL)arg1 ;
@end

