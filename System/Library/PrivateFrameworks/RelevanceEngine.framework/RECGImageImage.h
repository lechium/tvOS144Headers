/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@interface RECGImageImage : REImage {

	CGImageRef _CGImage;
	double _scale;

}

@property (nonatomic,readonly) CGImageRef CGImage;              //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) double scale;                    //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(CGImageRef)CGImage;
-(id)initWithImage:(CGImageRef)arg1 scale:(double)arg2 ;
@end

