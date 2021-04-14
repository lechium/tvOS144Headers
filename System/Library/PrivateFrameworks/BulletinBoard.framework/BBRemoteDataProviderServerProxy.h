/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BBRemoteDataProviderServerProxy <NSObject>
@required
-(void)invalidateBulletins;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
-(void)modifyBulletin:(id)arg1;
-(void)withdrawBulletinsWithRecordID:(id)arg1;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
-(void)reloadSectionParameters:(id)arg1;
-(void)reloadDefaultSectionInfo:(id)arg1;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1;
-(void)setClearedInfo:(id)arg1;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1;
-(void)setSectionInfo:(id)arg1;

@end

