/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCollectionsSizeProvider.h>

@class NSString;

@interface MKPlaceCollectionsSizeController : NSObject <MKCollectionsSizeProvider> {

	BOOL _isSingleCollection;
	BOOL _isMarzipan;
	double _defaultCollectionHeight;
	double _defaultCollectionWidth;
	SCD_Struct_MK22 _collectionsConfiguration;
	UIEdgeInsets _sectionInset;

}

@property (assign,nonatomic) UIEdgeInsets sectionInset;                             //@synthesize sectionInset=_sectionInset - In the implementation block
@property (assign,nonatomic) double defaultCollectionHeight;                        //@synthesize defaultCollectionHeight=_defaultCollectionHeight - In the implementation block
@property (assign,nonatomic) double defaultCollectionWidth;                         //@synthesize defaultCollectionWidth=_defaultCollectionWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK22 collectionsConfiguration;              //@synthesize collectionsConfiguration=_collectionsConfiguration - In the implementation block
@property (assign,nonatomic) BOOL isSingleCollection;                               //@synthesize isSingleCollection=_isSingleCollection - In the implementation block
@property (assign,nonatomic) BOOL isMarzipan;                                       //@synthesize isMarzipan=_isMarzipan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)sectionInset;
-(double)minimumLineSpacing;
-(id)initWithCollectionsConfiguration:(SCD_Struct_MK22)arg1 isSingleCollection:(BOOL)arg2 usingTraitCollections:(id)arg3 ;
-(CGSize)sizeForCollectionWithMaxCollectionsWidth:(double)arg1 ;
-(UIEdgeInsets)sectionInsets;
-(double)minimumInterItemSpacing;
-(id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg1 ;
-(void)setDefaultCollectionHeight:(double)arg1 ;
-(void)setDefaultCollectionWidth:(double)arg1 ;
-(SCD_Struct_MK22)collectionsConfiguration;
-(double)defaultCollectionHeight;
-(double)defaultCollectionWidth;
-(BOOL)isMarzipan;
-(void)setCollectionsConfiguration:(SCD_Struct_MK22)arg1 ;
-(BOOL)isSingleCollection;
-(void)setIsSingleCollection:(BOOL)arg1 ;
-(void)setIsMarzipan:(BOOL)arg1 ;
@end

