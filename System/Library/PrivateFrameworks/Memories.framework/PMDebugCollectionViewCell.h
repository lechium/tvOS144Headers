/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol PMDebugCollectionViewControllerProtocol;
@class UIImageView, UILabel, NSString, PHAsset;

@interface PMDebugCollectionViewCell : UICollectionViewCell {

	UIImageView* _thumbnailView;
	UILabel* _data1Label;
	UILabel* _data2Label;
	UILabel* _data3Label;
	UILabel* _date1Label;
	UILabel* _date2Label;
	UILabel* _date3Label;
	NSString* _editStyleStr;
	PHAsset* _asset;
	id<PMDebugCollectionViewControllerProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<PMDebugCollectionViewControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                                          //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                                              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UILabel * data1Label;                                                     //@synthesize data1Label=_data1Label - In the implementation block
@property (nonatomic,retain) UILabel * data2Label;                                                     //@synthesize data2Label=_data2Label - In the implementation block
@property (nonatomic,retain) UILabel * data3Label;                                                     //@synthesize data3Label=_data3Label - In the implementation block
@property (nonatomic,retain) UILabel * date1Label;                                                     //@synthesize date1Label=_date1Label - In the implementation block
@property (nonatomic,retain) UILabel * date2Label;                                                     //@synthesize date2Label=_date2Label - In the implementation block
@property (nonatomic,retain) UILabel * date3Label;                                                     //@synthesize date3Label=_date3Label - In the implementation block
@property (nonatomic,retain) NSString * editStyleStr;                                                  //@synthesize editStyleStr=_editStyleStr - In the implementation block
+(BOOL)hasOneGBRAM;
-(id<PMDebugCollectionViewControllerProtocol>)delegate;
-(void)setDelegate:(id<PMDebugCollectionViewControllerProtocol>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)awakeFromNib;
-(UIImageView *)thumbnailView;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UILabel *)data1Label;
-(UILabel *)data2Label;
-(UILabel *)data3Label;
-(UILabel *)date1Label;
-(UILabel *)date2Label;
-(UILabel *)date3Label;
-(void)strokeToverMaxT:(float)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)setEditStyleStr:(NSString *)arg1 ;
-(SCD_Struct_Mi0)_stingerTime;
-(unsigned long long)countMediaClips:(BOOL)arg1 ;
-(id)tVsDurationGraph;
-(id)stringForAssetCollectionSubType:(long long)arg1 ;
-(id)stringForAssetCollectionTypeString:(long long)arg1 ;
-(void)configureHeader:(BOOL)arg1 ;
-(id)stringForSize:(unsigned long long)arg1 ;
-(id)_printImageOrientationforAsset:(id)arg1 ;
-(id)determineDerivativeUsedFromAsset:(id)arg1 ;
-(void)configureWithAsset:(id)arg1 pickInfo:(id)arg2 delegate:(id)arg3 indexPath:(id)arg4 isSaveMode:(BOOL)arg5 textOnly:(BOOL)arg6 curatedAssets:(id)arg7 ;
-(void)setData1Label:(UILabel *)arg1 ;
-(void)setData2Label:(UILabel *)arg1 ;
-(void)setData3Label:(UILabel *)arg1 ;
-(void)setDate1Label:(UILabel *)arg1 ;
-(void)setDate2Label:(UILabel *)arg1 ;
-(void)setDate3Label:(UILabel *)arg1 ;
-(NSString *)editStyleStr;
@end

