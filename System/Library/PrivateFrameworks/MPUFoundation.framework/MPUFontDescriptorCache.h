/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPUMutableFontDescriptor, NSMutableArray;

@interface MPUFontDescriptorCache : NSObject {

	MPUMutableFontDescriptor* _reusableMutableFontDescriptor;
	unsigned long long _maximumCapacity;
	NSMutableArray* _orderedCachedFontDescriptors;

}
+(id)sharedFontDescriptorCache;
-(id)init;
-(void)dealloc;
-(id)cachedImmutableFontDescriptorForConfigurationBlock:(/*^block*/id)arg1 ;
-(id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
@end

