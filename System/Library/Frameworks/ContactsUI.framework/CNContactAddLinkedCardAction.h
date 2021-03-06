/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNContact, NSArray, CNContactPickerViewController, NSString;

@interface CNContactAddLinkedCardAction : CNContactAction <CNContactPickerDelegate, CNContactContentViewControllerDelegate> {

	CNContact* _chosenContact;
	NSArray* _editingLinkedContacts;
	CNContactPickerViewController* _contactPicker;
	CNContact* _selectedContact;

}

@property (nonatomic,retain) CNContactPickerViewController * contactPicker;              //@synthesize contactPicker=_contactPicker - In the implementation block
@property (nonatomic,retain) CNContact * selectedContact;                                //@synthesize selectedContact=_selectedContact - In the implementation block
@property (nonatomic,retain) CNContact * chosenContact;                                  //@synthesize chosenContact=_chosenContact - In the implementation block
@property (nonatomic,retain) NSArray * editingLinkedContacts;                            //@synthesize editingLinkedContacts=_editingLinkedContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(NSArray *)editingLinkedContacts;
-(void)setContactPicker:(CNContactPickerViewController *)arg1 ;
-(void)setChosenContact:(CNContact *)arg1 ;
-(CNContact *)selectedContact;
-(CNContactPickerViewController *)contactPicker;
-(void)setSelectedContact:(CNContact *)arg1 ;
-(void)peoplePickerLinkButtonTapped;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4 ;
-(CNContact *)chosenContact;
-(void)setEditingLinkedContacts:(NSArray *)arg1 ;
@end

