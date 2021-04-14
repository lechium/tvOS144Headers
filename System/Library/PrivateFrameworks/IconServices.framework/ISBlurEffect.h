/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ISEffect.h>

@class NSString;

@interface ISBlurEffect : NSObject <ISEffect> {

	double _radius;

}

@property (assign) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)initWithRadius:(double)arg1 ;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
@end

