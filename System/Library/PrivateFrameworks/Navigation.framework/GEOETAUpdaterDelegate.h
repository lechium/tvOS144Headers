/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOETAUpdaterDelegate <NSObject>
@optional
-(void)etaUpdaterRequestCompleted:(id)arg1;

@required
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 etaRoute:(id)arg3;
-(void)etaUpdaterUpdatedETA:(id)arg1;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;

@end
