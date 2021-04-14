/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <TVKit/TVImageRepresentation.h>

@class NSBundle, NSString, UITraitCollection;

@interface _TVNamedImageRepresentation : TVImageRepresentation {

	NSBundle* _bundle;
	NSString* _imageName;
	UITraitCollection* _traitCollection;

}
-(CGImageRef)_originalImage;
-(id)initWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
-(id)_originalImageCacheKey;
@end

