/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICommand.h>

@class UICommand, UICommandAlternate;

@interface _UIValidatableCommand : UICommand {

	UICommand* _command;
	UICommandAlternate* _alternate;

}
-(id)init;
-(id)propertyList;
-(SEL)action;
-(void)useCommand:(id)arg1 alternate:(id)arg2 ;
-(id)alternates;
@end

