//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray;

@interface TVSettingsRegionViewController : TSKViewController
{
    NSArray *_filteredSectionIndexTitles;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100053f1c
@property(copy, nonatomic) NSArray *filteredSectionIndexTitles; // @synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles;
- (id)_localeFormatter;	// IMP=0x0000000100053e40
- (void)setRegion:(id)arg1;	// IMP=0x0000000100053858
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100053850
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000100053840
- (id)loadSettingGroups;	// IMP=0x0000000100052fe0

@end

