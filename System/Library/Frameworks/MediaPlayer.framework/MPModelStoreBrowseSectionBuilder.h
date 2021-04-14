/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPPropertySet;

@interface MPModelStoreBrowseSectionBuilder : NSObject {

	SCD_Struct_MP13 _requestedBrowseSectionProperties;
	MPPropertySet* _requestedPropertySet;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;                                             //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (nonatomic,readonly) MPPropertySet * requestedPropertySetExcludingInternalOnlyProperties; 
+(id)allSupportedInternalOnlyProperties;
+(id)allSupportedPropertiesIncludingInternalOnlyProperties:(BOOL)arg1 ;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(MPPropertySet *)requestedPropertySetExcludingInternalOnlyProperties;
-(id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(BOOL)arg4 isBrick:(BOOL)arg5 previouslyRetrievedNestedResponse:(id)arg6 ;
-(id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(BOOL)arg4 isBrick:(BOOL)arg5 displaysAsGridCellInCarPlay:(BOOL)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(BOOL)arg8 featuredContentKind:(long long)arg9 ;
-(id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(BOOL)arg4 isBrick:(BOOL)arg5 displaysAsGridCellInCarPlay:(BOOL)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(BOOL)arg8 featuredContentKind:(long long)arg9 modelObject:(id)arg10 ;
-(MPPropertySet *)requestedPropertySet;
@end

