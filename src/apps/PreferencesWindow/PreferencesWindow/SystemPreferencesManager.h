// -*- Mode: objc -*-

@import Cocoa;
#import "SystemPreferencesModel.h"

@interface SystemPreferencesManager : NSObject

@property(readonly) SystemPreferencesModel* systemPreferencesModel;

- (void)setup;

@end
