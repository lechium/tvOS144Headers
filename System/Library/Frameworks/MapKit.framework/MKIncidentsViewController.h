/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/_MKTableViewController.h>

@class NSArray, NSString;

@interface MKIncidentsViewController : _MKTableViewController {

	NSArray* _sections;
	NSArray* _transitIncidents;
	NSArray* _restrictionIncidents;
	NSArray* _notices;
	NSString* _incidentsTitle;

}

@property (nonatomic,copy) NSArray * transitIncidents;                  //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (nonatomic,copy) NSArray * restrictionIncidents;              //@synthesize restrictionIncidents=_restrictionIncidents - In the implementation block
@property (nonatomic,copy) NSArray * notices;                           //@synthesize notices=_notices - In the implementation block
@property (nonatomic,readonly) NSString * incidentsTitle;               //@synthesize incidentsTitle=_incidentsTitle - In the implementation block
-(id)init;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)transitIncidents;
-(void)setTransitIncidents:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(void)reloadDataSource;
-(void)_localeDidChange;
-(unsigned long long)_incidentsCount;
-(void)_updateTitle;
-(void)_compileSections;
-(long long)_sectionForSectionIndex:(long long)arg1 ;
-(id)_transitCellForIndex:(long long)arg1 inSection:(long long)arg2 ;
-(id)_restrictionCellForIndex:(long long)arg1 ;
-(id)_noticeCellForIndex:(long long)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(id)extendedDetailCell;
-(id)detailCellInSection:(long long)arg1 ;
-(unsigned long long)_transitIncidentsCount;
-(NSArray *)restrictionIncidents;
-(NSArray *)notices;
-(id)_cellForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)initWithTransitIncidents:(id)arg1 ;
-(id)initWithRestrictionIncidents:(id)arg1 ;
-(void)setRestrictionIncidents:(NSArray *)arg1 ;
-(void)setNotices:(NSArray *)arg1 ;
-(long long)_transitIncidentIndexForRow:(long long)arg1 section:(long long)arg2 ;
-(NSString *)incidentsTitle;
@end

