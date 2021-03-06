/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIImageView, UIButton, UIImage;

@interface AAUIProfilePhotoView : UIView {

	UIImageView* _photoView;
	UIButton* _editButton;
	BOOL _isEditing;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,setter=setEditing:,nonatomic) BOOL isEditing;              //@synthesize isEditing=_isEditing - In the implementation block
-(BOOL)isEditing;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)layoutSubviews;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

