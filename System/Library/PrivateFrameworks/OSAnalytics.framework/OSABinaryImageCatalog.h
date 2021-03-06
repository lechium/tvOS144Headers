/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OSAnalytics/OSAnalytics-Structs.h>
@class OSABinaryImageSegment, NSMutableArray, NSMutableDictionary;

@interface OSABinaryImageCatalog : NSObject {

	OSABinaryImageSegment* _absolute_segment;
	OSABinaryImageSegment* _kernel_cache_segment;
	NSMutableArray* _kernel_segments;
	NSMutableArray* _kernel_text_exec_segments;
	NSMutableArray* _rootedCacheLibs;
	OSABinaryImageSegment* _targeted_cache;
	unsigned long long _targeted_slide;
	NSMutableDictionary* _shared_segments;
	NSMutableArray* _used_segments;
	NSMutableArray* _notes;

}
+(BOOL)isApplePath:(id)arg1 orBundle:(id)arg2 ;
-(id)init;
-(id)reportUsedImages;
-(void)appendNotesTo:(id)arg1 ;
-(id)searchFrame:(unsigned long long)arg1 in:(id)arg2 result:(id*)arg3 ;
-(BOOL)isAddressInTargetedCache:(unsigned long long)arg1 ;
-(void)setRootedCacheLibs:(dyld_uuid_info_64*)arg1 count:(unsigned)arg2 ;
-(void)setKernelCache:(unsigned char)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(void)setKernelTextExecImages:(id)arg1 ;
-(void)setKernelImages:(id)arg1 ;
-(void)targetSharedCache:(unsigned char)arg1 withSlide:(unsigned long long)arg2 atBaseAddress:(unsigned long long)arg3 ;
-(unsigned long long)markImageAsUsed:(id)arg1 from:(int)arg2 ;
-(id)reportUsedImagesLegacyInfo;
@end

