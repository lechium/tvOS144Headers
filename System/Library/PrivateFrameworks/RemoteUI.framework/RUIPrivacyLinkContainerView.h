/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@class NSDictionary, OBPrivacyLinkController, NSString;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter> {

	NSDictionary* _attributes;
	OBPrivacyLinkController* _linkController;

}

@property (readonly) OBPrivacyLinkController * linkController;              //@synthesize linkController=_linkController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAttributes:(id)arg1 ;
-(void)layoutSubviews;
-(void)configureInPage:(id)arg1 ;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(OBPrivacyLinkController *)linkController;
@end

