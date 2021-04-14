/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UILabel;

@interface AVInfoPanelCollectionReusableHeaderView : UICollectionReusableView {

	NSString* _headerTitle;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
+(double)minimumRequiredHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(long long)_textAlignmentForUserInterfaceLayout;
@end

