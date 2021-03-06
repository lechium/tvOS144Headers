/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {

	CGSize _contentSize;
	unsigned long long _layoutAxis;
	BOOL _layoutRTL;
	NSDirectionalEdgeInsets _supplementaryInsets;
	NSDirectionalEdgeInsets _sectionInsets;
	CGRect _contentFrame;
	CGRect _effectiveFrame;

}

@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize auxillaryHostContentSize; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) CGRect effectiveFrame; 
-(id)description;
-(CGRect)contentFrame;
-(CGSize)contentSize;
-(CGPoint)contentOffset;
-(CGSize)effectiveContentSize;
-(id)initWithContentSize:(CGSize)arg1 layoutAxis:(unsigned long long)arg2 layoutRTL:(BOOL)arg3 sectionInsets:(NSDirectionalEdgeInsets)arg4 supplementaryInsets:(NSDirectionalEdgeInsets)arg5 ;
-(CGRect)contentRectForSectionRect:(CGRect)arg1 ;
-(CGSize)auxillaryHostContentSize;
-(void)_computeFrames;
-(CGRect)effectiveFrame;
@end

