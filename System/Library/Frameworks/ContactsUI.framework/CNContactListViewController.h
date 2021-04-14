/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CNContactListBannerViewDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CNUIPeopleGroupsGridViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>

@protocol CNContactDataSource, CNContactListViewControllerDelegate;
@class NSObject, _UIContentUnavailableView, CNContact, NSString, CNContactFormatter, CNAvatarCardController, UISearchController, UISearchBar, CNContactListBannerView, CNUIContactsEnvironment, CNAvatarViewController, CNUIPeopleGroupsGridViewController, NSArray;

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactPickerDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIPeopleGroupsGridViewControllerDelegate, CNUIObjectViewControllerDelegate> {

	BOOL _shouldRefreshMeContact;
	BOOL _shouldDisplayMeContactBanner;
	BOOL _shouldAutoHideMeContactBanner;
	BOOL _allowsSearching;
	BOOL _presentsSearchUI;
	BOOL _shouldDisplayGroupsGrid;
	NSObject*<CNContactDataSource> _dataSource;
	_UIContentUnavailableView* _noContactsView;
	CNContact* _meContact;
	id<CNContactListViewControllerDelegate> _delegate;
	NSString* _meContactBannerFootnoteLabel;
	NSString* _meContactBannerFootnoteValue;
	CNContactFormatter* _contactFormatter;
	CNAvatarCardController* _cardController;
	UISearchController* _searchController;
	UISearchBar* _searchBar;
	/*^block*/id _searchCompletionBlock;
	CNContactListBannerView* _meContactBanner;
	double _contentOffsetDueToMeContactBanner;
	CNUIContactsEnvironment* _environment;
	CNAvatarViewController* _meBannerAvatarController;
	CNUIPeopleGroupsGridViewController* _groupsGridController;
	NSArray* _tableViewHeaderConstraints;
	CNContactListViewController* _searchResultsController;

}

@property (nonatomic,retain) CNAvatarCardController * cardController;                                //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                  //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,copy) id searchCompletionBlock;                                                 //@synthesize searchCompletionBlock=_searchCompletionBlock - In the implementation block
@property (nonatomic,retain) CNContactListBannerView * meContactBanner;                              //@synthesize meContactBanner=_meContactBanner - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                  //@synthesize meContact=_meContact - In the implementation block
@property (assign,nonatomic) BOOL shouldRefreshMeContact;                                            //@synthesize shouldRefreshMeContact=_shouldRefreshMeContact - In the implementation block
@property (nonatomic,readonly) double contentOffsetDueToMeContactBanner;                             //@synthesize contentOffsetDueToMeContactBanner=_contentOffsetDueToMeContactBanner - In the implementation block
@property (nonatomic,readonly) _UIContentUnavailableView * noContactsView;                           //@synthesize noContactsView=_noContactsView - In the implementation block
@property (nonatomic,readonly) BOOL presentsSearchUI;                                                //@synthesize presentsSearchUI=_presentsSearchUI - In the implementation block
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * meBannerAvatarController;                      //@synthesize meBannerAvatarController=_meBannerAvatarController - In the implementation block
@property (nonatomic,retain) CNUIPeopleGroupsGridViewController * groupsGridController;              //@synthesize groupsGridController=_groupsGridController - In the implementation block
@property (nonatomic,retain) NSArray * tableViewHeaderConstraints;                                   //@synthesize tableViewHeaderConstraints=_tableViewHeaderConstraints - In the implementation block
@property (nonatomic,retain) CNContactListViewController * searchResultsController;                  //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayGroupsGrid;                                           //@synthesize shouldDisplayGroupsGrid=_shouldDisplayGroupsGrid - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactListViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<CNContactDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMeContactBanner;                                      //@synthesize shouldDisplayMeContactBanner=_shouldDisplayMeContactBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoHideMeContactBanner;                                     //@synthesize shouldAutoHideMeContactBanner=_shouldAutoHideMeContactBanner - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteLabel;                                  //@synthesize meContactBannerFootnoteLabel=_meContactBannerFootnoteLabel - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteValue;                                  //@synthesize meContactBannerFootnoteValue=_meContactBannerFootnoteValue - In the implementation block
@property (assign,nonatomic) BOOL allowsSearching;                                                   //@synthesize allowsSearching=_allowsSearching - In the implementation block
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) NSArray * selectedContacts; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                  //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CNContactListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNContactListViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CNUIContactsEnvironment *)environment;
-(id)_sections;
-(NSObject*<CNContactDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(NSObject*<CNContactDataSource>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)viewDidLoad;
-(void)loadView;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(UISearchBar *)searchBar;
-(void)setSearchResultsController:(CNContactListViewController *)arg1 ;
-(CNContactListViewController *)searchResultsController;
-(CNAvatarCardController *)cardController;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactStoreDidChangeWithNotification:(id)arg1 ;
-(id)hostingViewControllerForController:(id)arg1 ;
-(void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2 ;
-(void)bannerViewWasSelectedToPresentPeoplePicker:(id)arg1 ;
-(void)setAllowsSearching:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 ;
-(void)beginSearch:(id)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(BOOL)shouldDisplayMeContactBanner;
-(BOOL)isSearching;
-(void)searchForString:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)selectContact:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)reloadContacts;
-(void)peopleGroupsGridViewControllerDidChange:(id)arg1 ;
-(void)_applicationEnteringForeground:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 searchable:(BOOL)arg2 environment:(id)arg3 ;
-(void)contactDataSourceDidChange:(id)arg1 ;
-(BOOL)presentsSearchUI;
-(void)_searchBarDidEndEditing:(id)arg1 ;
-(BOOL)allowsSearching;
-(void)setShouldRefreshMeContact:(BOOL)arg1 ;
-(void)refreshTableViewHeader;
-(BOOL)updateFrameAndDisplayNoContactsViewIfNeeded;
-(id)_contactAtIndexPath:(id)arg1 ;
-(CNUIPeopleGroupsGridViewController *)groupsGridController;
-(void)refreshTableViewHeaderIfVisible;
-(void)setSearchCompletionBlock:(id)arg1 ;
-(id)searchCompletionBlock;
-(_UIContentUnavailableView *)noContactsView;
-(BOOL)isHandlingSearch;
-(void)_updateCountString;
-(BOOL)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1 ;
-(CNAvatarViewController *)meBannerAvatarController;
-(BOOL)shouldDisplayGroupsGrid;
-(BOOL)shouldAutoHideMeContactBanner;
-(CNContactListBannerView *)meContactBanner;
-(NSString *)meContactBannerFootnoteLabel;
-(NSString *)meContactBannerFootnoteValue;
-(void)setGroupsGridController:(CNUIPeopleGroupsGridViewController *)arg1 ;
-(NSArray *)tableViewHeaderConstraints;
-(void)setTableViewHeaderConstraints:(NSArray *)arg1 ;
-(void)userHasSelectedToSetupMeContact;
-(void)contactDataSourceDidChangeDisplayName:(id)arg1 ;
-(void)setupForMultiSelection;
-(NSArray *)selectedContacts;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)setMeContactBannerFootnoteLabel:(NSString *)arg1 ;
-(void)setMeContactBannerFootnoteValue:(NSString *)arg1 ;
-(void)setShouldDisplayGroupsGrid:(BOOL)arg1 ;
-(BOOL)shouldRefreshMeContact;
-(void)setShouldAutoHideMeContactBanner:(BOOL)arg1 ;
-(void)setMeContactBanner:(CNContactListBannerView *)arg1 ;
-(double)contentOffsetDueToMeContactBanner;
-(void)setMeBannerAvatarController:(CNAvatarViewController *)arg1 ;
@end

