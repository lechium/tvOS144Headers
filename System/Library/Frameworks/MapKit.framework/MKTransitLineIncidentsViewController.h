/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/MKTransitItemReferenceDateUpdaterDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>

@protocol MKTransitLineIncidentsViewControllerDelegate, GEOTransitLineItem;
@class MKTransitItemIncidentsController, NSDate, MKTransitItemReferenceDateUpdater, NSString;

@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKTransitItemReferenceDateUpdaterDelegate, MKStackingViewControllerPreferredSizeUse> {

	MKTransitItemIncidentsController* _incidentsController;
	NSDate* _referenceDate;
	id<MKTransitLineIncidentsViewControllerDelegate> _incidentsDelegate;
	id<GEOTransitLineItem> _lineItem;
	MKTransitItemReferenceDateUpdater* _itemUpdater;

}

@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                                                      //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,copy,readonly) NSDate * referenceDate;                                                          //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,readonly) MKTransitItemReferenceDateUpdater * itemUpdater;                                      //@synthesize itemUpdater=_itemUpdater - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitLineIncidentsViewControllerDelegate> incidentsDelegate;              //@synthesize incidentsDelegate=_incidentsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(NSDate *)referenceDate;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)_incidents;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)initWithLineItem:(id)arg1 ;
-(void)_showIncidentDetails;
-(void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2 ;
-(void)updateTransitLineItemIfNeeded;
-(MKTransitItemReferenceDateUpdater *)itemUpdater;
-(id<MKTransitLineIncidentsViewControllerDelegate>)incidentsDelegate;
-(id)_incidentCellForRow:(long long)arg1 ;
-(void)transitUIReferenceTimeUpdated:(id)arg1 ;
-(void)_dismissTransitIncidents;
-(void)setIncidentsDelegate:(id<MKTransitLineIncidentsViewControllerDelegate>)arg1 ;
@end

