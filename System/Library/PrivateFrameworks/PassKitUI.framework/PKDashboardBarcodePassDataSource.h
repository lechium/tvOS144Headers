/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSecureElementObserver.h>
#import <libobjc.A.dylib/PKDashboardPassDataSource.h>

@protocol PKDashboardDataSourceDelegate;
@class PKPassGroupView, PKGroup, NSString;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource> {

	PKPassGroupView* _groupView;
	PKGroup* _group;
	id<PKDashboardDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(void)setDataSourceDelegate:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)initWithGroupView:(id)arg1 context:(id)arg2 ;
-(void)sendContentIsLoadedIfNecessary;
-(id)footerTextItemForSection:(unsigned long long)arg1 ;
-(void)groupViewDidUpdatePassView:(id)arg1 ;
-(void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2 ;
@end

