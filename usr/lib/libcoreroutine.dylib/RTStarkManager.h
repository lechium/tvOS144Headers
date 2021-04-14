/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager;

@interface RTStarkManager : RTService {

	RTDefaultsManager* _defaultsManager;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;              //@synthesize defaultsManager=_defaultsManager - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(id)init;
-(RTDefaultsManager *)defaultsManager;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)_fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
@end

