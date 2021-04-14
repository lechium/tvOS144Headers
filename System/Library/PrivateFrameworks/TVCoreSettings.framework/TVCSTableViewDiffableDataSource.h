/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVCoreSettings/TVCoreSettings-Structs.h>
#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol TVCSTableViewDiffableDataSourceProxy;
@interface TVCSTableViewDiffableDataSource : UITableViewDiffableDataSource {

	SCD_Struct_TV3 _dataSourceProxyRespondsTo;
	id<TVCSTableViewDiffableDataSourceProxy> _dataSourceProxy;

}

@property (assign,nonatomic,__weak) id<TVCSTableViewDiffableDataSourceProxy> dataSourceProxy;              //@synthesize dataSourceProxy=_dataSourceProxy - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<TVCSTableViewDiffableDataSourceProxy>)dataSourceProxy;
-(void)setDataSourceProxy:(id<TVCSTableViewDiffableDataSourceProxy>)arg1 ;
@end

