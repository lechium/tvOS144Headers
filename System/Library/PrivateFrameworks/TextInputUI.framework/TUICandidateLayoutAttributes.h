/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface TUICandidateLayoutAttributes : UICollectionViewLayoutAttributes {

	unsigned long long _candidateNumber;
	double _contentAlpha;
	unsigned long long _row;

}

@property (assign,nonatomic) unsigned long long candidateNumber;              //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) double contentAlpha;                             //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long row;                          //@synthesize row=_row - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setRow:(unsigned long long)arg1 ;
-(unsigned long long)row;
-(double)contentAlpha;
-(void)setContentAlpha:(double)arg1 ;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(unsigned long long)candidateNumber;
@end

