/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSPersonNameComponents, UIImageView, UILabel;

@interface TVSUIProfilePictureView : UIView {

	UIImage* _profilePictureImage;
	NSPersonNameComponents* _personNameComponents;
	UIImageView* _contentImageView;
	UILabel* _initialsLabel;

}

@property (nonatomic,readonly) UIImageView * contentImageView;                         //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,readonly) UILabel * initialsLabel;                                //@synthesize initialsLabel=_initialsLabel - In the implementation block
@property (nonatomic,retain) UIImage * profilePictureImage;                            //@synthesize profilePictureImage=_profilePictureImage - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * personNameComponents;              //@synthesize personNameComponents=_personNameComponents - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateContent;
-(NSPersonNameComponents *)personNameComponents;
-(void)setPersonNameComponents:(NSPersonNameComponents *)arg1 ;
-(UIImageView *)contentImageView;
-(void)setProfilePictureImage:(UIImage *)arg1 ;
-(UIImage *)profilePictureImage;
-(UILabel *)initialsLabel;
@end
