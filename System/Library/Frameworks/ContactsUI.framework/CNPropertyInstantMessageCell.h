/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@interface CNPropertyInstantMessageCell : CNPropertySimpleTransportCell {

	id _action;

}

@property (nonatomic,retain) id action;              //@synthesize action=_action - In the implementation block
-(id)action;
-(void)setAction:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)updateTransportButtons;
-(void)transportButton1Clicked:(id)arg1 ;
@end

