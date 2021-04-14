/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreChart/CoreChart-Structs.h>
@class NSMutableDictionary;

@interface CCVegaJSFontCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _styleCache;
	NSMutableDictionary* _internalNameCache;

}
+(id)sharedCache;
+(void)cleanUp;
+(CTFontRef)cacheedFontForInternalName:(id)arg1 ;
+(void)cacheFont:(CTFontRef)arg1 forInternalName:(id)arg2 ;
+(id)fontMetricsForTextStyle:(id)arg1 options:(id)arg2 ;
+(id)fontWithCSSFontString:(id)arg1 options:(id)arg2 ;
+(id)fontWithFontFamily:(id)arg1 fontSize:(double)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 fontVariant:(id)arg5 options:(id)arg6 ;
-(id)init;
@end

