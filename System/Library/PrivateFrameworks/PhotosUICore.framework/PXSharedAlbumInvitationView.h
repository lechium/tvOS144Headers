/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PXSharedAlbumInvitationViewDelegate, PLCloudSharedAlbumProtocol;
@class PXFeedInvitationSectionInfo, PXRoundedCornerOverlayView, UIImageView, UILabel, PXCapsuleButton, NSString;

@interface PXSharedAlbumInvitationView : UIView <PXSettingsKeyObserver> {

	BOOL _useInPopover;
	id<PXSharedAlbumInvitationViewDelegate> _delegate;
	PXFeedInvitationSectionInfo* _invitationSectionInfo;
	double _cornerRadius;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	unsigned long long _avatarImageTag;
	UIImageView* _avatarView;
	UILabel* _infoLabel;
	UILabel* _albumTitleLabel;
	UILabel* _subscriberInfoLabel;
	PXCapsuleButton* _acceptButton;
	PXCapsuleButton* _declineButton;
	UILabel* _reportJunkLabel;
	id<PLCloudSharedAlbumProtocol> _sharedAlbum;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) PXRoundedCornerOverlayView * roundedCornerOverlayView;                //@synthesize roundedCornerOverlayView=_roundedCornerOverlayView - In the implementation block
@property (assign,nonatomic) unsigned long long avatarImageTag;                                    //@synthesize avatarImageTag=_avatarImageTag - In the implementation block
@property (nonatomic,retain) UIImageView * avatarView;                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                  //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UILabel * albumTitleLabel;                                            //@synthesize albumTitleLabel=_albumTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subscriberInfoLabel;                                        //@synthesize subscriberInfoLabel=_subscriberInfoLabel - In the implementation block
@property (nonatomic,retain) PXCapsuleButton * acceptButton;                                       //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) PXCapsuleButton * declineButton;                                      //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) UILabel * reportJunkLabel;                                            //@synthesize reportJunkLabel=_reportJunkLabel - In the implementation block
@property (nonatomic,retain) id<PLCloudSharedAlbumProtocol> sharedAlbum;                           //@synthesize sharedAlbum=_sharedAlbum - In the implementation block
@property (assign,nonatomic,__weak) id<PXSharedAlbumInvitationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXFeedInvitationSectionInfo * invitationSectionInfo;                  //@synthesize invitationSectionInfo=_invitationSectionInfo - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL useInPopover;                                                    //@synthesize useInPopover=_useInPopover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preloadResources;
-(void)dealloc;
-(id<PXSharedAlbumInvitationViewDelegate>)delegate;
-(void)setDelegate:(id<PXSharedAlbumInvitationViewDelegate>)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateUI;
-(void)setAvatarView:(UIImageView *)arg1 ;
-(UIImageView *)avatarView;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_updateColors;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id<PLCloudSharedAlbumProtocol>)sharedAlbum;
-(void)setSharedAlbum:(id<PLCloudSharedAlbumProtocol>)arg1 ;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)_updateRoundedCornerOverlayView;
-(void)setInvitationSectionInfo:(PXFeedInvitationSectionInfo *)arg1 ;
-(void)setUseInPopover:(BOOL)arg1 ;
-(id)_parentViewBackgroundColor;
-(id)_declineButtonColor;
-(id)_roundedCornerViewBackgroundColor;
-(void)_updateAvatarImage:(unsigned long long)arg1 ;
-(void)_handlePersonImage:(id)arg1 imageTag:(unsigned long long)arg2 ;
-(void)_updateInfoLabel;
-(void)_updateAlbumTitleLabel;
-(void)_updateSubscriberInfoLabel;
-(void)_updateReportJunkLabel;
-(id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 buttonColor:(id)arg3 titleColor:(id)arg4 ;
-(void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enableUserInteractions:(BOOL)arg1 ;
-(void)_presentToastWithTitle:(id)arg1 ;
-(void)_acceptButtonTapped:(id)arg1 ;
-(void)_declineButtonTapped:(id)arg1 ;
-(void)_reportJunk;
-(void)_reportJunkLabelTapped:(id)arg1 ;
-(PXFeedInvitationSectionInfo *)invitationSectionInfo;
-(BOOL)useInPopover;
-(PXRoundedCornerOverlayView *)roundedCornerOverlayView;
-(void)setRoundedCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(unsigned long long)avatarImageTag;
-(void)setAvatarImageTag:(unsigned long long)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(UILabel *)albumTitleLabel;
-(void)setAlbumTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subscriberInfoLabel;
-(void)setSubscriberInfoLabel:(UILabel *)arg1 ;
-(PXCapsuleButton *)acceptButton;
-(void)setAcceptButton:(PXCapsuleButton *)arg1 ;
-(PXCapsuleButton *)declineButton;
-(void)setDeclineButton:(PXCapsuleButton *)arg1 ;
-(UILabel *)reportJunkLabel;
-(void)setReportJunkLabel:(UILabel *)arg1 ;
@end

