/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSHTTPArchiveController : NSObject
+(void)initialize;
+(id)buffer;
+(BOOL)_disabled;
+(id)harURLFilters;
+(id)maxBufferSizeOverride;
+(void)setMaxBufferSizeOverride:(id)arg1 ;
+(void)_updateMaxBufferSize;
+(void)_updateHarFileFilters;
+(BOOL)_shouldAddRequest:(id)arg1 ;
+(BOOL)isRemoveDisabled;
+(void)setRemoveDisabled:(BOOL)arg1 ;
+(id)_harURLFilters;
+(void)addHTTPArchive:(id)arg1 ;
+(void)_writeHTTPArchivesToDiskCompressed:(BOOL)arg1 ;
@end
