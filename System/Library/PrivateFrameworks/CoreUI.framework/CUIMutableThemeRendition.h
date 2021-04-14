/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionSliceInformation, CUIRenditionMetrics;

@interface CUIMutableThemeRendition : CUIThemeRendition {

	renditionkeytoken* _renditionKey;
	CGImageRef _image;
	CUIRenditionSliceInformation* _sliceInformation;
	CUIRenditionMetrics* _renditionMetrics;

}
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(const renditionkeytoken*)key;
-(id)metrics;
-(CGImageRef)unslicedImage;
-(id)initWithCGImage:(CGImageRef)arg1 withDescription:(id)arg2 forKey:(const renditionkeytoken*)arg3 ;
-(id)sliceInformation;
@end

