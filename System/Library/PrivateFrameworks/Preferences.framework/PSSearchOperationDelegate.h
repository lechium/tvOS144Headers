/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSSearchOperationDelegate <NSObject>
@required
-(void)searchOperationDidBegin:(id)arg1;
-(id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
-(void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
-(void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
-(void)searchOperationDidCancel:(id)arg1;

@end
