/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXLayoutItemInput.h>

@class NSString;

@interface PXLayoutItem : NSObject <PXLayoutItemInput> {

	double _weight;
	CGSize _size;
	CGPoint _positionOffset;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double weight;                            //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGPoint positionOffset;                   //@synthesize positionOffset=_positionOffset - In the implementation block
@property (assign,nonatomic) CGRect preferredCropRect;                 //@synthesize preferredCropRect=_preferredCropRect - In the implementation block
@property (assign,nonatomic) CGRect acceptableCropRect;                //@synthesize acceptableCropRect=_acceptableCropRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGSize)size;
-(CGAffineTransform)transform;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGRect)preferredCropRect;
-(CGRect)acceptableCropRect;
-(double)weightUsingCriterion:(long long)arg1 ;
-(CGPoint)positionOffset;
-(id)initWithSize:(CGSize)arg1 weight:(double)arg2 ;
-(void)setPositionOffset:(CGPoint)arg1 ;
-(void)setPreferredCropRect:(CGRect)arg1 ;
-(void)setAcceptableCropRect:(CGRect)arg1 ;
@end

