/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IconServices/IconServices-Structs.h>
@class NSArray;

@interface ISIconSpecification : NSObject {

	double _maxScale;
	double _minScale;
	NSArray* _imageSpecifications;
	CGSize _maxSize;
	CGSize _minSize;

}

@property (readonly) NSArray * imageSpecifications;                 //@synthesize imageSpecifications=_imageSpecifications - In the implementation block
@property (readonly) CGSize maxSize;                                //@synthesize maxSize=_maxSize - In the implementation block
@property (readonly) CGSize minSize;                                //@synthesize minSize=_minSize - In the implementation block
@property (readonly) double maxScale;                               //@synthesize maxScale=_maxScale - In the implementation block
@property (readonly) double minScale;                               //@synthesize minScale=_minScale - In the implementation block
@property (readonly) NSArray * allImageSpecifications; 
+(id)macosIconSpecification;
+(id)macosTemplateIconSpecification;
+(id)defaultIconSpecification;
-(CGSize)maxSize;
-(double)maxScale;
-(id)_initWithImageSpecifiactions:(id)arg1 ;
-(id)imageSpecificationForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSArray *)allImageSpecifications;
-(CGSize)minSize;
-(double)minScale;
-(NSArray *)imageSpecifications;
@end

