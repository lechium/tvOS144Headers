/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, WFDialogButton;

@interface WFChooseFromListDialogRequest : WFDialogRequest <NSSecureCoding> {

	BOOL _allowsMultipleSelection;
	NSArray* _items;
	NSString* _message;
	WFDialogButton* _doneButton;
	WFDialogButton* _cancelButton;

}

@property (nonatomic,copy,readonly) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleSelection;                    //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * emptyStateMessage; 
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)items;
-(NSString *)message;
-(WFDialogButton *)cancelButton;
-(BOOL)allowsMultipleSelection;
-(WFDialogButton *)doneButton;
-(id)initWithItems:(id)arg1 allowsMultipleSelection:(BOOL)arg2 message:(id)arg3 attribution:(id)arg4 prompt:(id)arg5 ;
-(NSString *)emptyStateMessage;
@end

